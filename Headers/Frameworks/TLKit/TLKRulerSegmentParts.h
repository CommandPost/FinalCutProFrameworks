//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TLKRulerSegmentParts : NSObject
{
    NSString *_label;
    NSMutableArray *_subTicksFrames;
    struct CGRect _tickFrame;
    struct CGRect _labelFrame;
}

@property(retain, nonatomic) NSMutableArray *subTicksFrames; // @synthesize subTicksFrames=_subTicksFrames;
@property(nonatomic) struct CGRect labelFrame; // @synthesize labelFrame=_labelFrame;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) struct CGRect tickFrame; // @synthesize tickFrame=_tickFrame;
- (void)dealloc;
- (id)init;

@end

