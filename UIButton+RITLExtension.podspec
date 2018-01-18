
Pod::Spec.new do |s|

  s.name         = 'UIButton+RITLKit'
  s.version      = '0.0.1'
  s.summary      = "A setter and getter property in View for UIButton."

  s.homepage     = "https://github.com/RITL/UIButton-RITLExtension.git"

  s.license      = 'MIT'

  s.authors       = { "Yuexiaowen" => "yuexiaowen108@gmail.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/RITL/UIButton-RITLExtension.git", :tag => s.version }
  s.source_files = "UIButton+RITLKit/**/*.{h,m}"

  s.frameworks   = 'Foundation', 'UIKit'
  s.requires_arc = true

end
