require 'fileutils'

module Build
  BUILD_DIR='build'
  C_FILES = Dir['mods/core/src/*.c'] +
            Dir['src/*.c']

  CC='clang'
  CFLAGS=%w{-Wall -Werror -Wextra -O3 -std=c99}
  INCLUDES=[
    'mods/core/inc'
  ].map {|i| "-I" + i}

  PROG='ckvs'
  OUTPUT=File.join(BUILD_DIR, PROG)
  
  module_function
  def build
    FileUtils.mkdir_p(BUILD_DIR)

    cmd = [CC] + CFLAGS + INCLUDES + C_FILES + ["-o", OUTPUT]
    puts cmd.join(" ")

    system(*cmd)
  end

  def clean
    FileUtils.rm_rf(BUILD_DIR)
  end

  def run
    unless File.exist?(OUTPUT)
      Build.build
    end

    puts "./" + OUTPUT
    system("./" + OUTPUT)
  end
end

case ARGV[0]
when 'build'
  Build.build
when 'clean'
  Build.clean
when 'run'
  Build.run
else
  Build.build
end
