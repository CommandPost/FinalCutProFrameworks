//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

@class FFPlayerItemModule;

@interface PEPlayerTabContentModule : LKViewModule
{
    FFPlayerItemModule *_contentModule;
}

@property(readonly, nonatomic) FFPlayerItemModule *contentModule; // @synthesize contentModule=_contentModule;
- (BOOL)acceptsFirstResponder;
- (BOOL)wantsFirstResponder;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)applyLayoutDictionary:(id)arg1;
- (id)init;

@end

