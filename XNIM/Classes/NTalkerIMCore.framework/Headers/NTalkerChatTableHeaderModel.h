//
//  NTalkerChatTableHeaderModel.h
//  NengCloud
//
//  Created by mac on 2017/4/14.
//  Copyright © 2017年 NTalker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NTalkerChatTableHeaderModel : NSObject

@property (nonatomic, strong) NSString *goodIconUrl;

@property (nonatomic ,strong) NSString *goodName;

@property (nonatomic, assign) NSInteger goodPrice;

/**
 商品品牌名称
 */
@property (nonatomic, strong) NSString *br;


/**
 商品分类名称
 */
@property (nonatomic, strong) NSString *ca;

/**
 商品图片地址
 */
@property (nonatomic, strong) NSString *iu;

/**
 市场价格
 */
@property (nonatomic, strong) NSString *mp;

/**
 商品id
 */
@property (nonatomic, copy) NSString *prid;

/**
 商品网站价格
 */
@property (nonatomic, strong) NSString *sp;

/**
 商品名称
 */
@property (nonatomic, strong) NSString *pn;

/**
 商品详情页地址
 */
@property (nonatomic, copy) NSString *url;
/*
 "br":"耐克",
 "mp":"355",
 "prid":"p12345",
 "iu":"http://release-rd1.ntalker.com:140/rd/Products/p123",
 "sp":"311",
 "pn":"篮球",
 "ca":"运动类"
 */
@end
