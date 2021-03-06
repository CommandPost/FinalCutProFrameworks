//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/NSCopying-Protocol.h>
#import <TLKit/NSMutableCopying-Protocol.h>

@interface TLKBoxMetrics : NSObject <NSCopying, NSMutableCopying>
{
    double _topPadding;
    double _leftPadding;
    double _bottomPadding;
    double _rightPadding;
    double _topMargin;
    double _leftMargin;
    double _bottomMargin;
    double _rightMargin;
    double _height;
    double _minHeight;
    double _maxHeight;
    unsigned long long _displayType;
}

@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(readonly, nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(readonly, nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(readonly, nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(readonly, nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(readonly, nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(readonly, nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (struct CGRect)computeRect:(struct CGRect)arg1;
@property(readonly, nonatomic) double totalHeight;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 ofClass:(Class)arg2;
- (id)init;

@end

