//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextFramework/OZTextInspectorController.h>

@class LKButtonCell, OZAutoTextGeneratorController;

@interface TXTextGeneratorInspectorController : OZTextInspectorController
{
    OZAutoTextGeneratorController *_pGeneratorController;
    LKButtonCell *_generatorButtonCell;
}

- (id)newGeneratorControllerWithSceneNode:(struct OZSceneNode *)arg1;
- (void)switchPane:(id)arg1;
- (void)dealloc;
- (id)initWithSceneNodes:(list_e89ce44a *)arg1 viewCtlrDelegate:(id)arg2;

@end

