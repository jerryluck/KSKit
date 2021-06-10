Pod::Spec.new do |s|
  s.name             = 'KSKit'
  s.version          = '5.2'
  s.summary          = 'A library used on iOS.'
  s.description      = <<-DESC
                       It is a library used on iOS, which implement by Objective-C.
                       DESC
  s.homepage         = 'https://github.com/jerryluck/KSKit'
  s.license          = 'MIT'
  s.author           = { 'jerry' => 'gaoguang2008@126.com' }
  s.source           = { :git => 'https://github.com/jerryluck/KSKit.git', :tag =>   s.version.to_s }

  s.platform     = :ios, '11.0'

  s.requires_arc = true

  s.source_files = 'Lib/**/*.{h,m}'


end
