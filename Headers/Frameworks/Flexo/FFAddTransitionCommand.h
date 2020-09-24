//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject, FFAnchoredSequence, FFAnchoredTransition, NSArray;

@interface FFAddTransitionCommand : NSObject
{
    BOOL _shouldAddToStart;
    BOOL _shouldAddToEnd;
    FFAnchoredObject *_clip;
    NSArray *_transitionsAdded;
    FFAnchoredTransition *_firstTransitionAdded;
    FFAnchoredSequence *_sequence;
    unsigned long long _durationInSeconds;
}

@property(nonatomic) unsigned long long durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(nonatomic) BOOL shouldAddToEnd; // @synthesize shouldAddToEnd=_shouldAddToEnd;
@property(nonatomic) BOOL shouldAddToStart; // @synthesize shouldAddToStart=_shouldAddToStart;
@property(retain, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) FFAnchoredTransition *firstTransitionAdded; // @synthesize firstTransitionAdded=_firstTransitionAdded;
@property(retain, nonatomic) NSArray *transitionsAdded; // @synthesize transitionsAdded=_transitionsAdded;
@property(retain, nonatomic) FFAnchoredObject *clip; // @synthesize clip=_clip;
- (void)execute;
- (void)dealloc;

@end
