//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class LKTileView, NSBundle, NSColor, NSMutableArray, NSString, NSView;

@interface LKTile : NSObject <NSCopying, NSCoding>
{
    NSView *_view;
    NSView *_expandableView;
    NSView *_initialFirstResponder;
    NSView *_lastKeyView;
    id _dataObject;
    id _identifier;
    LKTileView *_tileView;
    NSMutableArray *_topLevelObjects;
    NSColor *_backgroundColor;
    NSColor *_highlightColor;
    struct {
        unsigned int enabled:1;
        unsigned int expanded:1;
        unsigned int disableAutounbinder:1;
        unsigned int autoGeneratedIFR:1;
        unsigned int selected:1;
        unsigned int RESERVED:27;
    } _ptFlags;
    struct CGSize _expandedFrameSize;
    id _background;
    NSString *_nibName;
    NSBundle *_bundle;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (id)tileNibName;
+ (void)initialize;
- (BOOL)shouldHandleMouseDown:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (id)highlightColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (BOOL)isExpandable;
- (BOOL)isExpanded;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setExpanded:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)_lastKeyView;
- (id)initialFirstResponder;
- (void)_setInitialFirstResponder:(id)arg1 autoGenerated:(BOOL)arg2;
- (void)setInitialFirstResponder:(id)arg1;
- (void)_autoGenerateInitialFirstResponderIfNeeded;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setDataObject:(id)arg1;
- (id)dataObject;
- (void)_expandableViewFrameDidChange:(id)arg1;
- (void)setExpandableView:(id)arg1;
- (id)expandableView;
- (void)_viewFrameDidChange:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (BOOL)_loadView;
- (id)_backgroundView;
- (void)_setTileView:(id)arg1;
- (id)tileView;
- (void)_validateViewIsInViewHeirarchy:(id *)arg1;
- (void)awakeFromNib;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)initWithTileNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTileNibName:(id)arg1;
- (id)init;
- (void)_commonInit;

@end

