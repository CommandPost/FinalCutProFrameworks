//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class TLKItemComponentInfo;

@interface TLKShowRolloverOperation : NSOperation
{
    TLKItemComponentInfo *_currentItemComponent;
    TLKItemComponentInfo *_previousItemComponent;
}

@property(retain, nonatomic) TLKItemComponentInfo *previousItemComponent; // @synthesize previousItemComponent=_previousItemComponent;
@property(retain, nonatomic) TLKItemComponentInfo *currentItemComponent; // @synthesize currentItemComponent=_currentItemComponent;
- (void)main;
- (void)dealloc;
- (id)initWithItemComponent:(id)arg1 previousItemComponent:(id)arg2;

@end

