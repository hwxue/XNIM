//
//  WBIMManager.m
//  IMTest
//
//  Created by mac on 2019/6/26.
//  Copyright © 2019 mac. All rights reserved.
//

#import "WBIMManager.h"

#import <NTalkerGuestIMKit/NTalkerGuestIMKit.h>
#define rootUrl @"https://xn-gateway.dongfeng-nissan.com.cn/client-init/api/gate/kf/"
@implementation WBIMManager

static WBIMManager *_imManager = nil;
+ (instancetype)shareManager{
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
        if (_imManager == nil) {
             _imManager = [[self alloc]init];
        }
        
    });
    return _imManager;
}
/**
 * 初始化  SDK
 */
- (void)WB_initSDK{
    
    [Ntalker ntalker_initSDKWithSiteid:@"kf_1002" flashserverAddress:rootUrl completion:^(BOOL finished, NSUInteger code) {
        NSLog(@"%ld",code);
        if (code == 10005) {
            //登录 SDK
            [Ntalker ntalker_loginWithUserId:@"xiaoming283014370" andUserName:@"userName"];
            //判断是否登录
            //            BOOL isLogin = [Ntalker ntalker_isLoginWithUserId:@"xiaoming283014370"];
            
            //            NSLog(@"%d",isLogin);
            
        }
    }];
}
/**
 * 弹出SDK聊天界面
 */

- (UIViewController *)WBPushchatViewControllerWithChatParam{
    
    NtalkerChatParams *chatParems = [[NtalkerChatParams alloc] init];
    chatParems.settingId = @"kf_1002";//接待组id【必填】，示例 "kf_20000_template_9"，
//    chatParems.delegate = self;//聊天页面代理【选填】如果需要监听聊天页面事件或者自定义UI、扩展功能则必须设置代理。相应功能模块会提到具体方法。
    chatParems.productId = @"";//商品id 【选填】需要展示商品信息时填写，示例 @“ntalker_test”
    //创建聊天窗口
    UIViewController *chatVC = [Ntalker ntalker_chatViewControllerWithChatParam:chatParems];
    
    return chatVC;
}

/**
 * 发送消息
 */

- (void)WBSendMessageWithChatController:(UIViewController *)VC AndMessage:(NSString *)message{
    
    [Ntalker ntalker_sendMessageWithChatController:VC messageType:11 mesaage:message];
    
}

/**
 * 退出登录
 */

- (void)WBLogout{
    [Ntalker ntalker_logout];
    
}







@end
