//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface FFFaceRegistryEntry : NSObject <NSCopying>
{
    double certainty;
    int uniqueID;
    int nAppearances;
    int startingFrameIdx;
    int endingFrameIdx;
    BOOL reject;
    double initialFaceArea;
    double sumFaceArea;
    double sumSqFaceAreaMinusInitial;
    double sumFaceHeight;
    double sumBodyHeight;
}

@property BOOL reject; // @synthesize reject;
@property int endingFrameIdx; // @synthesize endingFrameIdx;
@property int startingFrameIdx; // @synthesize startingFrameIdx;
@property int nAppearances; // @synthesize nAppearances;
@property int uniqueID; // @synthesize uniqueID;
@property double certainty; // @synthesize certainty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)debugLog:(id)arg1;
- (double)getAvgBodyHeight;
- (double)getAvgFaceHeight;
- (double)getApproxVarInFaceArea;
- (double)getAvgFaceArea;
- (void)updateShotSizeStats:(id)arg1 nFrames:(int)arg2;
- (void)resetShotSizeStats:(id)arg1;
- (void)incNumOfAppearancesByN:(int)arg1;
- (void)incNumOfAppearances;
- (BOOL)mustKeep;
- (id)initWithUniqueID:(int)arg1;

@end

