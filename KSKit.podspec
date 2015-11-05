Pod::Spec.new do |s|
  s.name             = 'KSKit'
  s.version          = '3.4.7'
  s.summary          = 'A library used on iOS.'
  s.description      = <<-DESC
                       It is a library used on iOS, which implement by Objective-C.
                       DESC
  s.homepage         = 'https://github.com/jerryluck1/KSKit'
  s.license          = 'MIT'
  s.author           = { '高广亮' => 'gaoguang2008@126.com' }
  s.source           = { :git => 'https://github.com/jerryluck1/KSKit.git', :tag =>   s.version.to_s }

  s.platform     = :ios, '7.0'

  s.requires_arc = true

  s.source_files = 'Lib/**/*.{h,m}'
  non_arc_files = 'Lib/NSArray+SafeKit.{h,m}','Lib/NSMutableArray+SafeKit.{h,m}'


end