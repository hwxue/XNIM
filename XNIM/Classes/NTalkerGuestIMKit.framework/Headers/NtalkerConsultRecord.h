//
//  NtalkerConsultRecord.h
//  NTalkerGuestIMKit
//
//  Created by wzh on 2018/5/31.
//  Copyright © 2018年 NTalker. All rights reserved.
//咨询记录模型

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NtalkerConsultRecord : NSObject
@property (nonatomic, copy) NSString *templateId;
@property (nonatomic, copy) NSString *templateName;
@property (nonatomic, copy) NSString *kefuId;
@property (nonatomic, copy) NSString *kefuName;
@property (nonatomic, copy) NSString *kefuPortrait;
@property (nonatomic, copy) NSString *msgContent;
@property (nonatomic, copy) NSString *msgTime;
@property (nonatomic, copy) NSString *unreadCount;
@property (nonatomic, assign) BOOL isPlatform;

#pragma mark - 自定义参数
/** 头像图片 */
@property (strong,nonatomic) UIImage *iconImage;

+ (instancetype)consultRecordWithDict:(NSDictionary *)dict;
@end
