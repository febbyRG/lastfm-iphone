/* PlaybackViewController.h - Display currently-playing song info
 * 
 * Copyright 2009 Last.fm Ltd.
 *   - Primarily authored by Sam Steele <sam@last.fm>
 *
 * This file is part of MobileLastFM.
 *
 * MobileLastFM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MobileLastFM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MobileLastFM.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>
#import <MessageUI/MessageUI.h>
#import "LastFMService.h"
#import "ArtworkCell.h"
#import "ArtistViewController.h"

int tagSort(id tag1, id tag2, void *context);

@interface PlaybackViewController : UIViewController<UIPickerViewDelegate,UIPickerViewDataSource> {
	IBOutlet UILabel *_titleLabel;
	IBOutlet UIView *volumeView;
	IBOutlet UIButton *loveBtn;
	IBOutlet UIButton *banBtn;
	IBOutlet UIButton *infoBtn;
	IBOutlet UIButton *stopBtn;
	IBOutlet UIButton *skipBtn;
	IBOutlet UIImageView *_artworkView;
	IBOutlet UIImageView *_reflectedArtworkView;
	IBOutlet UILabel *_artistAndTrackTitle;
	IBOutlet UILabel *_elapsed;
	IBOutlet UILabel *_remaining;
	IBOutlet UIProgressView *_progress;
	IBOutlet UILabel *_bufferPercentage;
	IBOutlet UIImageView *_fullscreenMetadataView;
	IBOutlet UIButton *_badge;
	IBOutlet UIView *_filterView;
	IBOutlet UIPickerView *_filter;
	IBOutlet UIView *_loadingView;
	UIImage *artwork;
	UIImageView *_noArtworkView;
	NSLock *_lock;
	NSTimer *_timer;
	
	ArtistViewController *artistViewController;
}
-(void)backButtonPressed:(id)sender;
-(void)loveButtonPressed:(id)sender;
-(void)banButtonPressed:(id)sender;
-(void)stopButtonPressed:(id)sender;
-(void)skipButtonPressed:(id)sender;
-(void)onTourButtonPressed:(id)sender;
-(void)infoButtonPressed:(id)sender;
-(void)dismissFilterView:(id)sender;
-(void)filterButtonPressed:(id)sender;
-(void)artworkButtonPressed:(id)sender;
-(void)resignActive;
-(void)becomeActive;
@end
