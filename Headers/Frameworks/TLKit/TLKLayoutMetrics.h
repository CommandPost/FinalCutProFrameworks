//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/NSCopying-Protocol.h>

@interface TLKLayoutMetrics : NSObject <NSCopying>
{
    double _topLinePadding;
    double _bottomLinePadding;
    double _lineSpacing;
}

+ (id)zeroSpacingMetrics;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double bottomLinePadding; // @synthesize bottomLinePadding=_bottomLinePadding;
@property(nonatomic) double topLinePadding; // @synthesize topLinePadding=_topLinePadding;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

