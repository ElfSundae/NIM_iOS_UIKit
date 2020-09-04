Pod::Spec.new do |s|
  s.name = 'NIMKit'
  s.version = '2.14.001'
  s.summary = 'Netease IM UI Kit'
  s.homepage = 'http://netease.im'
  s.license = { :'type' => 'Copyright', :'text' => ' Copyright 2019 Netease '}
  s.authors = 'Netease IM Team'
  s.source  = { :git => 'https://github.com/ElfSundae/NIM_iOS_UIKit.git', :tag => s.version }
  s.platform = :ios, '9.0'
  s.frameworks = 'CoreText', 'SystemConfiguration', 'AVFoundation', 'CoreTelephony', 'AudioToolbox', 'CoreMedia' , 'VideoToolbox'
  s.libraries  = 'sqlite3.0', 'z', 'c++'

  s.default_subspec = 'Lite'

  s.subspec 'Lite' do |cs|
    cs.source_files = 'NIMKit/NIMKit/**/*.{h,m}'
    cs.dependency 'NIMKit/Core'
    cs.dependency 'NIMSDK_LITE', '~> 7.9.0'
  end

  s.subspec 'Full' do |cs|
    cs.source_files = 'NIMKit/NIMKit/**/*.{h,m}'
    cs.dependency 'NIMKit/Core'
    cs.dependency 'NIMSDK', '~> 7.9.0'
  end

  s.subspec 'Core' do |os|
    os.resources = 'NIMKit/Resources/*.*'
    os.dependency 'SDWebImage', '~> 5.1'
    os.dependency 'FLAnimatedImage', '~> 1.0'
    os.dependency 'Toast', '~> 4.0'
    os.dependency 'TZImagePickerController', '~> 3.0'
    os.dependency 'M80AttributedLabel', '~> 1.9'
    os.dependency 'YYImage', '~> 1.0'
    os.dependency 'YYImage/WebP'
    os.dependency 'UICollectionViewLeftAlignedLayout', '~> 1.0'
  end
end
