//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFRiggedChannelFolderController.h>

@class NSButton;

__attribute__((visibility("hidden")))
@interface FFActiveToolFolderController : FFRiggedChannelFolderController
{
    NSButton *_setToolButton;
    Class _toolClass;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (void)didBuildUI;
- (void)actionSetToolButton:(id)arg1;
- (void)activeToolChanged:(id)arg1;

@end

