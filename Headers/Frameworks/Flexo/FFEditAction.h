//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FFEditAction : NSObject
{
    int _editAction;
    BOOL _backTimed;
    NSString *_trackType;
    BOOL _shouldPerform;
    int _replaceType;
}

+ (id)editActionOfReplaceType:(int)arg1;
+ (id)editActionOfKind:(int)arg1 backTimed:(BOOL)arg2 trackType:(id)arg3;
@property(readonly, nonatomic) int replaceType; // @synthesize replaceType=_replaceType;
@property(readonly, retain, nonatomic) NSString *trackType; // @synthesize trackType=_trackType;
@property(readonly, nonatomic) BOOL backTimed; // @synthesize backTimed=_backTimed;
@property(readonly, nonatomic) int editAction; // @synthesize editAction=_editAction;
@property(nonatomic) BOOL shouldPerform; // @synthesize shouldPerform=_shouldPerform;
- (id)description;
- (void)dealloc;
- (id)initWithReplaceActionOfType:(int)arg1;
- (id)initWithAction:(int)arg1 backTimed:(BOOL)arg2 trackType:(id)arg3;

@end

