//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class FFPlayerItemModule;

@interface PEPlayerTabContentModule : LKViewModule
{
    FFPlayerItemModule *_contentModule;
}

@property(readonly, nonatomic) FFPlayerItemModule *contentModule; // @synthesize contentModule=_contentModule;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)applyLayoutDictionary:(id)arg1;
- (id)init;

@end

