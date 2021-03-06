//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MicaTextGroup : NSObject
{
    long long _identifier;
    CALayer *_rootLayer;
    NSMutableArray *_textLayers;
    NSMutableArray *_boundaryLayers;
    double _originalFontSize;
}

+ (void)clearDelegatesInAllGroups:(id)arg1;
+ (void)clearTextInAllGroups:(id)arg1;
+ (id)micaTextGroupFromPublishedObjects:(id)arg1 textLayerKey:(id)arg2 rootLayer:(id)arg3;
+ (id)arrayOfMicaTextGroupsFromPublishedObjects:(id)arg1 rootLayer:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double originalFontSize; // @synthesize originalFontSize=_originalFontSize;
@property(retain, nonatomic) NSMutableArray *boundaryLayers; // @synthesize boundaryLayers=_boundaryLayers;
@property(retain, nonatomic) NSMutableArray *textLayers; // @synthesize textLayers=_textLayers;
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (double)bestFontSizeForEditing;
- (struct CGRect)editBoundsInCoordinatesOfLayer:(id)arg1;
- (void)addTextLayer:(id)arg1 textLayerKey:(id)arg2 publishedObjects:(id)arg3;
- (id)firstTextLayer;
- (BOOL)hasRTLString;
- (BOOL)hasShrinkToFitText;
- (BOOL)hasLegacyLayers;
@property(nonatomic) struct CGColor *foregroundColor;
@property(copy, nonatomic) NSString *fontName;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(nonatomic) struct CGRect bounds;
@property(copy, nonatomic) NSString *string5;
@property(copy, nonatomic) NSString *string4;
@property(copy, nonatomic) NSString *string3;
@property(copy, nonatomic) NSString *string2;
@property(copy, nonatomic) NSString *string;
@property(nonatomic) id delegate;
- (int)stringCount;
- (BOOL)shouldUseAllCaps;
@property(readonly, nonatomic) double textHeight;
@property(readonly, nonatomic) double textShadowOpacity;
@property(readonly, nonatomic) BOOL tightHorizontalAlignment;
@property(readonly, nonatomic) double customLeading;
@property(readonly, nonatomic) BOOL useCustomLeading;
@property(readonly, nonatomic) struct CGColor *foregroundColor5;
@property(readonly, nonatomic) struct CGColor *foregroundColor4;
@property(readonly, nonatomic) struct CGColor *foregroundColor3;
@property(readonly, nonatomic) struct CGColor *foregroundColor2;
@property(readonly, nonatomic) double fontSize;
@property(readonly, copy, nonatomic) NSString *verticalAlignmentMode;
@property(readonly, copy, nonatomic) NSString *horizontalAlignmentModeRTL;
@property(readonly, copy, nonatomic) NSString *horizontalAlignmentMode;
@property(readonly, nonatomic, getter=isWrapped) BOOL wrapped;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGPoint position;
- (id)initWithRootLayer:(id)arg1;

@end

