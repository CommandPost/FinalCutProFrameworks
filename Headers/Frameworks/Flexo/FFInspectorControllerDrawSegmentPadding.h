//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFInspectorControllerDrawSegmentPadding : NSObject
{
    double _topPadding;
    double _bottomPadding;
    double _leadingPadding;
    double _trailingPadding;
}

+ (id)segmentPadding;
@property(nonatomic) double trailingPadding; // @synthesize trailingPadding=_trailingPadding;
@property(nonatomic) double leadingPadding; // @synthesize leadingPadding=_leadingPadding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (BOOL)isEqualToPadding:(id)arg1;

@end
