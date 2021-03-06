//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorTextParameterController.h>

@class NSCharacterSet;

__attribute__((visibility("hidden")))
@interface FFInspectorTokenParameterController : FFInspectorTextParameterController
{
    NSCharacterSet *_tokenizingCharacterSet;
}

+ (double)bottomSpacingForTextField;
+ (double)topSpacingForTextField;
+ (Class)classForTextField;
+ (id)defaultProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSCharacterSet *tokenizingCharacterSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end

