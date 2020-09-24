//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFTrimming.h"

@class FFAnchoredObject, NSString;

@interface FFTrimAdapter : NSObject <FFTrimming>
{
    FFAnchoredObject *_representedObject;
    CDStruct_1b6d18a9 _trimOffset;
    BOOL _commit;
    BOOL _allowNegativeTime;
    CDStruct_1b6d18a9 _trimStartOffset;
    CDStruct_1b6d18a9 actualTrimStartOffset;
    CDStruct_1b6d18a9 _trimEndOffset;
    CDStruct_1b6d18a9 actualTrimEndOffset;
    CDStruct_e83c9415 trimmedRange;
}

@property(nonatomic) BOOL allowNegativeTime; // @synthesize allowNegativeTime=_allowNegativeTime;
@property(nonatomic) BOOL commit; // @synthesize commit=_commit;
@property(readonly, nonatomic) FFAnchoredObject *representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) CDStruct_1b6d18a9 actualTrimEndOffset; // @synthesize actualTrimEndOffset;
@property(nonatomic) CDStruct_1b6d18a9 trimEndOffset; // @synthesize trimEndOffset=_trimEndOffset;
@property(nonatomic) CDStruct_1b6d18a9 actualTrimStartOffset; // @synthesize actualTrimStartOffset;
@property(nonatomic) CDStruct_1b6d18a9 trimStartOffset; // @synthesize trimStartOffset=_trimStartOffset;
@property(nonatomic) CDStruct_e83c9415 trimmedRange; // @synthesize trimmedRange;
- (CDStruct_e83c9415)audioRangeIncludingTransitionsForEdit:(id)arg1;
- (CDStruct_e83c9415)actualAudioClippedRange;
- (BOOL)isFadeOutTransition:(id)arg1;
- (BOOL)isFadeInTransition:(id)arg1;
- (CDStruct_1b6d18a9)trimOffset:(CDStruct_1b6d18a9)arg1 withTrimOperation:(id)arg2;
- (id)createTrimEndOperation;
- (id)createTrimStartOperation;
- (BOOL)shouldResolveNegativeContainerTime;
- (id)createResolveNegativeContainerTimeOperation;
- (void)trimEnd;
- (void)trimStart;
- (void)trim;
- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 untrimmedRange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
