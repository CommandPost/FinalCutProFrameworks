//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LKViewModule;

@protocol LKViewModuleDelegate <NSObject>

@optional
- (void)module:(LKViewModule *)arg1 willRemoveSubmodule:(LKViewModule *)arg2;
- (void)module:(LKViewModule *)arg1 didAddSubmodule:(LKViewModule *)arg2;
- (void)module:(LKViewModule *)arg1 didUnhideSubmodule:(LKViewModule *)arg2;
- (void)module:(LKViewModule *)arg1 didHideSubmodule:(LKViewModule *)arg2;
@end

