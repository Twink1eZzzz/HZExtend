//
//  NetworkConfig.h
//  ZHFramework
//
//  Created by xzh on 16/1/9.
//  Copyright © 2016年 xzh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Singleton.h"
#define kNetworkPage @"page"
#define kNetworkPageSize @"pageSize"
@interface NetworkConfig : NSObject
singleton_h(Config)

/**
 *  公共的相同URL部分
 */
@property(nonatomic, copy, readonly) NSString *baseURL;

/**
 *  状态码路径,供task取得数据
 */
@property(nonatomic, copy, readonly) NSString *codeKeyPath;

/**
 *  消息码路径,供task取得数据
 */
@property(nonatomic, copy, readonly) NSString *msgKeyPath;

/**
 *  客户端标识，用于设置请求头
 */
@property(nonatomic, copy, readonly) NSString *userAgent;

/**
 *  正确的状态码
 */
@property(nonatomic, assign, readonly) NSUInteger rightCode;

/**
 *  默认的公共请求头
 */
@property(nonatomic, copy, readonly) NSDictionary *defaultHeaderFields;

/**
 *  网络是否通(程序启动时有0.02左右的延迟,故需延迟0.02秒请求)
 */
@property(nonatomic, assign, readonly) BOOL reachable;

/**
 *  配置公共参数
 */
- (void)setupBaseURL:(NSString *)baseURL
         codeKeyPath:(NSString *)codeKeyPath
          msgKeyPath:(NSString *)msgKeyPath
           userAgent:(NSString *)userAgent
           rightCode:(NSUInteger)rightCode;

/**
 *  添加公共请求头
 */
- (void)addDefaultHeaderFields:(NSDictionary *)headerFields;

@end
