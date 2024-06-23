# uniapp-ios-uts
uniapp ios uts插件及demo

iOS uts插件开发心得：
1、真机运行时Xcode版本必须和官方云打包Xcode版本一样，当前为Xcode15.2。
2、uts代码修改或页面代码修改后保存直接触发差异化更新运行，uts代码修改后重新编译安装运行基座App，需要注意缓存文件的影响，删除unpackage目录下所有文件避免偶尔出现的代码修改后不生效。编辑代码后没有手动保存，HX不会自动保存，修改后需要手动保存才能生效。
3、uts插件依赖第三方库当前只能为swift framework，framework可以依赖c/c++库，但编译framework的Xcode版本必须和官方云打包Xcode版本一致，当前为Xcode15.2。
4、所谓的云打包就是将uts插件JS代码在编译阶段翻译为对应的swift代码，然后生成基座App。
