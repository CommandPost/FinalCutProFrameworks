//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface OZAudioListPrototypeView : NSView
{
    id _representedObject;
    BOOL _selected;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (id)hitTest:(struct CGPoint)arg1;

@end

