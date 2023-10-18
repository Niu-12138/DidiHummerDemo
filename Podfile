# Uncomment the next line to define a global platform for your project
source 'https://github.com/CocoaPods/Specs.git'

platform :ios, '11.0'

install! 'cocoapods', :warn_for_unused_master_specs_repo => false

inhibit_all_warnings!

target 'DidiHummerDemo' do
  # Uncomment the next line if you're using Swift or would like to use dynamic frameworks
  use_frameworks!


  pod 'Hummer', :git => 'git@github.com:didi/Hummer.git', :branch => 'master', :subspecs => ["OSSYoga"]
  pod 'Alamofire', '5.7.1'

end


post_install do |installer|  
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '11.0'
      config.build_settings['EXCLUDED_ARCHS[sdk=iphonesimulator*]'] = 'arm64'
    end
  end
end
