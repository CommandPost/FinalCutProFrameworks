//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFCoverFlowLayoutManager : NSObject
{
    struct CATransform3D leftTransform;
    struct CATransform3D rightTransform;
    float zDistance;
    float zCenterPosition;
    float zSidePosition;
    float sideSpacingFactor;
    float rowScaleFactor;
}

+ (id)layoutManager;
- (id)init;
- (float)positionOfSelectedFilmstripInLayer:(id)arg1;
- (struct __CFArray *)newFilmstripIndicesOfLayer:(id)arg1 inRect:(struct CGRect)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;

@end
