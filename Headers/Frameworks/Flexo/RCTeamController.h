//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"
#import "NSWindowDelegate.h"

@class FFAnchoredSequence, InaccessibleImageView, NSArrayController, NSButton, NSImageView, NSMutableArray, NSPanel, NSString, NSTableView, NSTextField, NSTimer, NSUndoManager, NSView, SquareImagePicker;

@interface RCTeamController : NSWindowController <NSWindowDelegate, NSTextFieldDelegate>
{
    NSPanel *m_panel;
    NSArrayController *m_teamArrayController;
    NSArrayController *m_sportArrayController;
    NSArrayController *m_playerArrayController;
    NSTableView *m_teamTableView;
    NSTableView *m_playerTableView;
    NSTableView *m_sportTableView;
    NSView *m_okButton;
    NSButton *m_updateProjectButton;
    NSView *m_dividerLine;
    NSView *m_sportsWrapper;
    SquareImagePicker *m_teamImagePicker;
    SquareImagePicker *m_playerImagePicker;
    NSView *m_accessoryView;
    NSImageView *m_needUpdateImageView;
    NSTextField *m_needUpdateTextField;
    InaccessibleImageView *m_smallGlyphTeamImageView;
    InaccessibleImageView *m_largeGlyphTeamImageView;
    InaccessibleImageView *m_smallGlyphPlayerImageView;
    InaccessibleImageView *m_largeGlyphPlayerImageView;
    NSMutableArray *m_sports;
    NSMutableArray *m_teams;
    BOOL m_showSports;
    int m_windowSizeOffset;
    NSTimer *m_refreshTimer;
    NSUndoManager *m_undoManager;
    FFAnchoredSequence *m_activeSequence;
}

+ (id)sharedTeamController;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=m_undoManager;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=m_refreshTimer;
@property(nonatomic) BOOL showSports; // @synthesize showSports=m_showSports;
@property(retain, nonatomic) NSMutableArray *teams; // @synthesize teams=m_teams;
@property(retain, nonatomic) NSMutableArray *sports; // @synthesize sports=m_sports;
- (void)stopObservingObjectChildren:(id)arg1;
- (void)startObservingObjectChildren:(id)arg1;
- (void)stopObservingObject:(id)arg1 keyPaths:(id)arg2;
- (void)startObservingObject:(id)arg1 keyPaths:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateChangeForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObjects:(id)arg1 fromObject:(id)arg2 keyPath:(id)arg3;
- (void)removeObject:(id)arg1 fromObject:(id)arg2 keyPath:(id)arg3;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2 inObject:(id)arg3 keyPath:(id)arg4;
- (void)insertObject:(id)arg1 inObject:(id)arg2 keyPath:(id)arg3;
- (void)changeKeyPath:(id)arg1 ofObject:(id)arg2 toImage:(id)arg3;
- (void)changeKeyPath:(id)arg1 ofObject:(id)arg2 toValue:(id)arg3;
- (id)undoActionNameForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)editSport:(id)arg1;
- (void)editPlayer:(id)arg1;
- (void)editTeam:(id)arg1;
- (id)appendNewSport;
- (id)appendNewPlayer;
- (id)appendNewTeam;
- (void)saveTeams;
- (BOOL)loadTeams;
- (void)updateSportsForTeams:(id)arg1;
- (void)addTeams:(id)arg1;
- (BOOL)willReplaceDataWhenAddingTeams:(id)arg1;
- (void)addPlayers:(id)arg1;
- (BOOL)willReplaceDataWhenAddingPlayers:(id)arg1;
- (void)deleteImagesForTeams:(id)arg1;
- (void)collectImagesForTeams:(id)arg1 to:(id)arg2;
- (void)updateImagesForTeams:(id)arg1 from:(id)arg2;
- (void)makeDefaultTeams;
- (id)defaultSport;
- (id)defaultSeason;
- (void)exportTeamsDidEnd:(id)arg1 returnCode:(int)arg2;
- (void)importTeamsDidEnd:(id)arg1 returnCode:(int)arg2;
- (void)importPlayerListDidEnd:(id)arg1 returnCode:(int)arg2;
- (void)windowWillClose:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (id)sortedTeams;
- (id)findSportEqualToSport:(id)arg1;
- (id)findSportWithName:(id)arg1;
- (id)findPlayerWithLabel:(id)arg1;
- (id)findPlayerWithUniqueID:(id)arg1;
- (id)findTeamContainingPlayer:(id)arg1;
- (id)findTeamEqualToTeam:(id)arg1 ignorePlayers:(BOOL)arg2;
- (id)findTeamWithLabel:(id)arg1;
- (id)findTeamWithUniqueID:(id)arg1;
- (id)nextCachePath;
- (id)teamImagesPath;
- (id)teamFilePath;
- (id)teamFolderPath;
- (void)revealAndSelectObject:(id)arg1;
- (void)revealAndSelectObjects:(id)arg1;
- (void)selectLastSport;
- (void)selectPlayerWithUniqueID:(id)arg1;
- (void)selectLastPlayer;
- (void)selectTeamWithUniqueID:(id)arg1;
- (void)selectLastTeam;
- (void)moveLatestTeamDataIntoTitles:(id)arg1 transitions:(id)arg2;
- (void)searchProjectForChangedTeams:(id)arg1 changedPlayers:(id)arg2 titlesToUpdate:(id)arg3 transitionsToUpdate:(id)arg4;
- (void)refreshUI;
- (void)executeRefreshTimer:(id)arg1;
- (void)stopRefreshTimer;
- (void)startRefreshTimer;
- (void)a_updateProject:(id)arg1;
- (void)a_showHelpForTeamEditor:(id)arg1;
- (void)a_sportChanged:(id)arg1;
- (void)a_seasonChanged:(id)arg1;
- (void)a_exportTeams:(id)arg1;
- (void)a_importTeams:(id)arg1;
- (void)a_importPlayerList:(id)arg1;
- (void)a_removeSport:(id)arg1;
- (void)a_removePlayer:(id)arg1;
- (void)a_removeTeam:(id)arg1;
- (void)a_addSport:(id)arg1;
- (void)a_addPlayer:(id)arg1;
- (void)a_addTeam:(id)arg1;
- (void)a_hideTeamEditor:(id)arg1;
- (void)a_showTeamEditor:(id)arg1;
- (void)setActiveSequence:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)awakeFromNib;
- (void)_adjustWindowSizeForSports;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

