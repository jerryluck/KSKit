Pod::Spec.new do |s|
  s.name             = 'KSKit'
  s.version          = '1.4'
  s.summary          = 'A library used on iOS.'
  s.description      = <<-DESC
                       It is a library used on iOS, which implement by Objective-C.
                       DESC
  s.homepage         = 'https://github.com/jerryluck1/KSKit'
  # s.screenshots      = “www.example.com/screenshots_1”, “www.example.com/screenshots_2”
  s.license          = 'MIT'
  s.author           = { '高广亮' => 'gaoguang2008@126.com' }
  s.source           = { :git => 'https://github.com/jerryluck1/KSKit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/NAME'

  s.platform     = :ios, '7.0'
  # s.ios.deployment_target = '7.0'
  # s.osx.deployment_target = '10.7'
  s.requires_arc = true

  s.source_files = 'Lib','Lib/**/*.{h,m}'
  #s.resources = 'KSKit/MBProgressHUD.bundle/**/*.png'

  # s.ios.exclude_files = 'Classes/osx'
  # s.osx.exclude_files = 'Classes/ios'
  # s.public_header_files = 'Classes/**/*.h'  
  # s.frameworks = 'MobileCoreServices', 'CFNetwork', 'CoreGraphics'
  # s.dependency 'YSASIHTTPRequest', '~> 2.0.1'
  # s.libraries = 'z.1'

end