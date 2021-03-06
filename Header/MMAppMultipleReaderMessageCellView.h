//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class MMImageView, MMSessionPickerWindow, MMView, NSArray, NSMutableArray, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface MMAppMultipleReaderMessageCellView : MMMessageCellView
{
    NSView *_containerView;
    NSArray *_readerMessages;
    NSTextField *_readerTitleLabel;
    NSView *_readerTitleContainer;
    NSTextField *_readerTimeLabel;
    MMView *_coverContainer;
    MMImageView *_coverThumbnail;
    NSView *_coverThumbnailContainer;
    MMView *_othersContainer;
    unsigned long long _selectedReaderWrapIndex;
    NSMutableArray *_viewsInOthersContainer;
    MMSessionPickerWindow *_sessionPickerWindow;
}

+ (id)otherNewsTitleAttributedStringWithReaderMessage:(id)arg1;
+ (double)heightForOtherNewsTitleString:(id)arg1 withTitleWidth:(double)arg2;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)coverThumbnailHeightWithContentWidth:(double)arg1;
+ (double)contentWidthWithCellWidth:(double)arg1;
@property(retain, nonatomic) MMSessionPickerWindow *sessionPickerWindow; // @synthesize sessionPickerWindow=_sessionPickerWindow;
@property(retain, nonatomic) NSMutableArray *viewsInOthersContainer; // @synthesize viewsInOthersContainer=_viewsInOthersContainer;
@property(nonatomic) unsigned long long selectedReaderWrapIndex; // @synthesize selectedReaderWrapIndex=_selectedReaderWrapIndex;
@property(retain, nonatomic) MMView *othersContainer; // @synthesize othersContainer=_othersContainer;
@property(retain, nonatomic) NSView *coverThumbnailContainer; // @synthesize coverThumbnailContainer=_coverThumbnailContainer;
@property(retain, nonatomic) MMImageView *coverThumbnail; // @synthesize coverThumbnail=_coverThumbnail;
@property(retain, nonatomic) MMView *coverContainer; // @synthesize coverContainer=_coverContainer;
@property(retain, nonatomic) NSTextField *readerTimeLabel; // @synthesize readerTimeLabel=_readerTimeLabel;
@property(retain, nonatomic) NSView *readerTitleContainer; // @synthesize readerTitleContainer=_readerTitleContainer;
@property(retain, nonatomic) NSTextField *readerTitleLabel; // @synthesize readerTitleLabel=_readerTitleLabel;
@property(retain, nonatomic) NSArray *readerMessages; // @synthesize readerMessages=_readerMessages;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (BOOL)makeMakeMultipleSelectUnavailable;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)contextMenuFavorites;
- (void)contextMenuForward;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (struct CGRect)clickableArea;
- (BOOL)showsSaveToFavoritesButton;
- (BOOL)showsContextMenuButton;
- (void)writeSelectedReaderWrapIntoPasteboardItem:(id)arg1;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)generatePasteboardItem;
- (BOOL)draggingEnabled;
- (id)selectedReaderWrap;
- (id)selectedView;
- (struct CGRect)selectedViewFrame;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGPath *)newBubblePathForRect:(struct CGRect)arg1;
- (id)draggingImage;
- (id)bubbleImage;
- (struct CGRect)bubbleFrame;
- (id)rowWithReaderMessage:(id)arg1 row:(unsigned long long)arg2;
- (void)layoutOtherMessages;
- (void)layoutCover;
- (void)layoutTitleLabel;
- (void)layoutViews;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)setShowGroupChatNickName:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

