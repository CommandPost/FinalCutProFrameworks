//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewCtlrRoot.h>

@class NSNumber;
@protocol FFOZChannelBridgeInspectorHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FFOZChannelBridgeInspectorHostViewController : OZViewCtlrRoot
{
    id <FFOZChannelBridgeInspectorHostViewControllerDelegate> _controllerDelegate;
    NSNumber *_overrideIndentLevel;
}

@property(nonatomic) id <FFOZChannelBridgeInspectorHostViewControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(retain, nonatomic) NSNumber *overrideIndentLevel; // @synthesize overrideIndentLevel=_overrideIndentLevel;
- (void)twiddle;
- (int)indentLevel;
- (void)select:(BOOL)arg1;
- (id)_ozControllerRoot;
- (id)delegate;
- (void)setIsInteractive:(BOOL)arg1;
- (_Bool)isAnimationEnabled;
- (void)resizedSubview:(id)arg1 byDeltaY:(float)arg2;
- (void)dealloc;

@end

