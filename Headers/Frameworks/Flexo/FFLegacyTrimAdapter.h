//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFTrimAdapter.h>

__attribute__((visibility("hidden")))
@interface FFLegacyTrimAdapter : FFTrimAdapter
{
}

- (BOOL)shouldResolveNegativeContainerTime;
- (id)createResolveNegativeContainerTimeOperation;
- (BOOL)shouldTrimEnd;
- (BOOL)shouldTrimStart;
- (void)adjustNegativeContainerTimeIfNeeded;
- (CDStruct_1b6d18a9)trimStartEdits:(id)arg1 endEdits:(id)arg2 trimOffset:(CDStruct_1b6d18a9)arg3;
- (void)trim;
- (int)temporalResolutionMode;
- (int)trimFlags;
- (int)trimEdgeType;
- (int)trimCommand;

@end

