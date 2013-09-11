//
//  UI7TabBar.h
//  UI7Kit
//
//  Created by Jeong YunWon on 13. 6. 16..
//  Copyright (c) 2013 youknowone.org. All rights reserved.
//


@interface UITabBar (iOS7)

#if __IPHONE_OS_VERSION_MAX_ALLOWED < 70000
@property(nonatomic) UIBarStyle barStyle;
#endif

@end


@interface UI7TabBar : UITabBar<UI7Patch>


@end


@interface UI7KitWorkaroundTintSingleton : NSObject

@property (nonatomic, retain) UIColor *workaroundTintColor;
@property (nonatomic, assign) UIBarStyle workaroundBarStyle;

+ (UI7KitWorkaroundTintSingleton *)sharedObject;

@end
