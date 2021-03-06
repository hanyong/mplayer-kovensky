// Generated by TOOLS/matroska.py, do not edit manually


E("TargetTypeValue", target_type_value, EBML_TYPE_UINT)

#define N targets
E_S("Targets", 1)
F(MATROSKA_ID_TARGETTYPEVALUE, target_type_value, 0)
}};
#undef N

#define N tag
E_S("Tag", 1)
F(MATROSKA_ID_TARGETS, targets, 0)
}};
#undef N

#define N tags
E_S("Tags", 1)
F(MATROSKA_ID_TAG, tag, 1)
}};
#undef N

E("ChapLanguage", chap_language, EBML_TYPE_STR)

E("ChapString", chap_string, EBML_TYPE_STR)

#define N chapter_display
E_S("ChapterDisplay", 2)
F(MATROSKA_ID_CHAPSTRING, chap_string, 0)
F(MATROSKA_ID_CHAPLANGUAGE, chap_language, 1)
}};
#undef N

E("ChapterSegmentEditionUID", chapter_segment_edition_uid, EBML_TYPE_UINT)

E("ChapterSegmentUID", chapter_segment_uid, EBML_TYPE_BINARY)

E("ChapterFlagEnabled", chapter_flag_enabled, EBML_TYPE_UINT)

E("ChapterFlagHidden", chapter_flag_hidden, EBML_TYPE_UINT)

E("ChapterTimeEnd", chapter_time_end, EBML_TYPE_UINT)

E("ChapterTimeStart", chapter_time_start, EBML_TYPE_UINT)

E("ChapterUID", chapter_uid, EBML_TYPE_UINT)

#define N chapter_atom
E_S("ChapterAtom", 8)
F(MATROSKA_ID_CHAPTERUID, chapter_uid, 0)
F(MATROSKA_ID_CHAPTERTIMESTART, chapter_time_start, 0)
F(MATROSKA_ID_CHAPTERTIMEEND, chapter_time_end, 0)
F(MATROSKA_ID_CHAPTERFLAGHIDDEN, chapter_flag_hidden, 0)
F(MATROSKA_ID_CHAPTERFLAGENABLED, chapter_flag_enabled, 0)
F(MATROSKA_ID_CHAPTERSEGMENTUID, chapter_segment_uid, 0)
F(MATROSKA_ID_CHAPTERSEGMENTEDITIONUID, chapter_segment_edition_uid, 0)
F(MATROSKA_ID_CHAPTERDISPLAY, chapter_display, 1)
}};
#undef N

E("EditionFlagOrdered", edition_flag_ordered, EBML_TYPE_UINT)

E("EditionFlagDefault", edition_flag_default, EBML_TYPE_UINT)

E("EditionFlagHidden", edition_flag_hidden, EBML_TYPE_UINT)

E("EditionUID", edition_uid, EBML_TYPE_UINT)

#define N edition_entry
E_S("EditionEntry", 5)
F(MATROSKA_ID_EDITIONUID, edition_uid, 0)
F(MATROSKA_ID_EDITIONFLAGHIDDEN, edition_flag_hidden, 0)
F(MATROSKA_ID_EDITIONFLAGDEFAULT, edition_flag_default, 0)
F(MATROSKA_ID_EDITIONFLAGORDERED, edition_flag_ordered, 0)
F(MATROSKA_ID_CHAPTERATOM, chapter_atom, 1)
}};
#undef N

#define N chapters
E_S("Chapters", 1)
F(MATROSKA_ID_EDITIONENTRY, edition_entry, 1)
}};
#undef N

E("FileUID", file_uid, EBML_TYPE_UINT)

E("FileData", file_data, EBML_TYPE_BINARY)

E("FileMimeType", file_mime_type, EBML_TYPE_STR)

E("FileName", file_name, EBML_TYPE_STR)

#define N attached_file
E_S("AttachedFile", 4)
F(MATROSKA_ID_FILENAME, file_name, 0)
F(MATROSKA_ID_FILEMIMETYPE, file_mime_type, 0)
F(MATROSKA_ID_FILEDATA, file_data, 0)
F(MATROSKA_ID_FILEUID, file_uid, 0)
}};
#undef N

#define N attachments
E_S("Attachments", 1)
F(MATROSKA_ID_ATTACHEDFILE, attached_file, 1)
}};
#undef N

E("CueClusterPosition", cue_cluster_position, EBML_TYPE_UINT)

E("CueTrack", cue_track, EBML_TYPE_UINT)

#define N cue_track_positions
E_S("CueTrackPositions", 2)
F(MATROSKA_ID_CUETRACK, cue_track, 0)
F(MATROSKA_ID_CUECLUSTERPOSITION, cue_cluster_position, 0)
}};
#undef N

E("CueTime", cue_time, EBML_TYPE_UINT)

#define N cue_point
E_S("CuePoint", 2)
F(MATROSKA_ID_CUETIME, cue_time, 0)
F(MATROSKA_ID_CUETRACKPOSITIONS, cue_track_positions, 1)
}};
#undef N

#define N cues
E_S("Cues", 1)
F(MATROSKA_ID_CUEPOINT, cue_point, 1)
}};
#undef N

E("ContentCompSettings", content_comp_settings, EBML_TYPE_BINARY)

E("ContentCompAlgo", content_comp_algo, EBML_TYPE_UINT)

#define N content_compression
E_S("ContentCompression", 2)
F(MATROSKA_ID_CONTENTCOMPALGO, content_comp_algo, 0)
F(MATROSKA_ID_CONTENTCOMPSETTINGS, content_comp_settings, 0)
}};
#undef N

E("ContentEncodingType", content_encoding_type, EBML_TYPE_UINT)

E("ContentEncodingScope", content_encoding_scope, EBML_TYPE_UINT)

E("ContentEncodingOrder", content_encoding_order, EBML_TYPE_UINT)

#define N content_encoding
E_S("ContentEncoding", 4)
F(MATROSKA_ID_CONTENTENCODINGORDER, content_encoding_order, 0)
F(MATROSKA_ID_CONTENTENCODINGSCOPE, content_encoding_scope, 0)
F(MATROSKA_ID_CONTENTENCODINGTYPE, content_encoding_type, 0)
F(MATROSKA_ID_CONTENTCOMPRESSION, content_compression, 0)
}};
#undef N

#define N content_encodings
E_S("ContentEncodings", 1)
F(MATROSKA_ID_CONTENTENCODING, content_encoding, 1)
}};
#undef N

E("BitDepth", bit_depth, EBML_TYPE_UINT)

E("Channels", channels, EBML_TYPE_UINT)

E("SamplingFrequency", sampling_frequency, EBML_TYPE_FLOAT)

#define N audio
E_S("Audio", 3)
F(MATROSKA_ID_SAMPLINGFREQUENCY, sampling_frequency, 0)
F(MATROSKA_ID_CHANNELS, channels, 0)
F(MATROSKA_ID_BITDEPTH, bit_depth, 0)
}};
#undef N

E("FrameRate", frame_rate, EBML_TYPE_FLOAT)

E("DisplayHeight", display_height, EBML_TYPE_UINT)

E("DisplayWidth", display_width, EBML_TYPE_UINT)

E("PixelHeight", pixel_height, EBML_TYPE_UINT)

E("PixelWidth", pixel_width, EBML_TYPE_UINT)

E("FlagInterlaced", flag_interlaced, EBML_TYPE_UINT)

#define N video
E_S("Video", 6)
F(MATROSKA_ID_FLAGINTERLACED, flag_interlaced, 0)
F(MATROSKA_ID_PIXELWIDTH, pixel_width, 0)
F(MATROSKA_ID_PIXELHEIGHT, pixel_height, 0)
F(MATROSKA_ID_DISPLAYWIDTH, display_width, 0)
F(MATROSKA_ID_DISPLAYHEIGHT, display_height, 0)
F(MATROSKA_ID_FRAMERATE, frame_rate, 0)
}};
#undef N

E("CodecDecodeAll", codec_decode_all, EBML_TYPE_UINT)

E("CodecPrivate", codec_private, EBML_TYPE_BINARY)

E("CodecID", codec_id, EBML_TYPE_STR)

E("Language", language, EBML_TYPE_STR)

E("Name", name, EBML_TYPE_STR)

E("MaxBlockAdditionID", max_block_addition_id, EBML_TYPE_UINT)

E("TrackTimecodeScale", track_timecode_scale, EBML_TYPE_FLOAT)

E("DefaultDuration", default_duration, EBML_TYPE_UINT)

E("MinCache", min_cache, EBML_TYPE_UINT)

E("FlagLacing", flag_lacing, EBML_TYPE_UINT)

E("FlagForced", flag_forced, EBML_TYPE_UINT)

E("FlagDefault", flag_default, EBML_TYPE_UINT)

E("FlagEnabled", flag_enabled, EBML_TYPE_UINT)

E("TrackType", track_type, EBML_TYPE_UINT)

E("TrackUID", track_uid, EBML_TYPE_UINT)

E("TrackNumber", track_number, EBML_TYPE_UINT)

#define N track_entry
E_S("TrackEntry", 19)
F(MATROSKA_ID_TRACKNUMBER, track_number, 0)
F(MATROSKA_ID_TRACKUID, track_uid, 0)
F(MATROSKA_ID_TRACKTYPE, track_type, 0)
F(MATROSKA_ID_FLAGENABLED, flag_enabled, 0)
F(MATROSKA_ID_FLAGDEFAULT, flag_default, 0)
F(MATROSKA_ID_FLAGFORCED, flag_forced, 0)
F(MATROSKA_ID_FLAGLACING, flag_lacing, 0)
F(MATROSKA_ID_MINCACHE, min_cache, 0)
F(MATROSKA_ID_DEFAULTDURATION, default_duration, 0)
F(MATROSKA_ID_TRACKTIMECODESCALE, track_timecode_scale, 0)
F(MATROSKA_ID_MAXBLOCKADDITIONID, max_block_addition_id, 0)
F(MATROSKA_ID_NAME, name, 0)
F(MATROSKA_ID_LANGUAGE, language, 0)
F(MATROSKA_ID_CODECID, codec_id, 0)
F(MATROSKA_ID_CODECPRIVATE, codec_private, 0)
F(MATROSKA_ID_CODECDECODEALL, codec_decode_all, 0)
F(MATROSKA_ID_VIDEO, video, 0)
F(MATROSKA_ID_AUDIO, audio, 0)
F(MATROSKA_ID_CONTENTENCODINGS, content_encodings, 0)
}};
#undef N

#define N tracks
E_S("Tracks", 1)
F(MATROSKA_ID_TRACKENTRY, track_entry, 1)
}};
#undef N

E("SimpleBlock", simple_block, EBML_TYPE_BINARY)

E("ReferenceBlock", reference_block, EBML_TYPE_SINT)

E("BlockDuration", block_duration, EBML_TYPE_UINT)

E("Block", block, EBML_TYPE_BINARY)

#define N block_group
E_S("BlockGroup", 3)
F(MATROSKA_ID_BLOCK, block, 0)
F(MATROSKA_ID_BLOCKDURATION, block_duration, 0)
F(MATROSKA_ID_REFERENCEBLOCK, reference_block, 1)
}};
#undef N

E("Timecode", timecode, EBML_TYPE_UINT)

#define N cluster
E_S("Cluster", 3)
F(MATROSKA_ID_TIMECODE, timecode, 0)
F(MATROSKA_ID_BLOCKGROUP, block_group, 1)
F(MATROSKA_ID_SIMPLEBLOCK, simple_block, 1)
}};
#undef N

E("Duration", duration, EBML_TYPE_FLOAT)

E("WritingApp", writing_app, EBML_TYPE_STR)

E("MuxingApp", muxing_app, EBML_TYPE_STR)

E("Title", title, EBML_TYPE_STR)

E("DateUTC", date_utc, EBML_TYPE_SINT)

E("TimecodeScale", timecode_scale, EBML_TYPE_UINT)

E("NextUID", next_uid, EBML_TYPE_BINARY)

E("PrevUID", prev_uid, EBML_TYPE_BINARY)

E("SegmentUID", segment_uid, EBML_TYPE_BINARY)

#define N info
E_S("Info", 9)
F(MATROSKA_ID_SEGMENTUID, segment_uid, 0)
F(MATROSKA_ID_PREVUID, prev_uid, 0)
F(MATROSKA_ID_NEXTUID, next_uid, 0)
F(MATROSKA_ID_TIMECODESCALE, timecode_scale, 0)
F(MATROSKA_ID_DATEUTC, date_utc, 0)
F(MATROSKA_ID_TITLE, title, 0)
F(MATROSKA_ID_MUXINGAPP, muxing_app, 0)
F(MATROSKA_ID_WRITINGAPP, writing_app, 0)
F(MATROSKA_ID_DURATION, duration, 0)
}};
#undef N

E("SeekPosition", seek_position, EBML_TYPE_UINT)

E("SeekID", seek_id, EBML_TYPE_EBML_ID)

#define N seek
E_S("Seek", 2)
F(MATROSKA_ID_SEEKID, seek_id, 0)
F(MATROSKA_ID_SEEKPOSITION, seek_position, 0)
}};
#undef N

#define N seek_head
E_S("SeekHead", 1)
F(MATROSKA_ID_SEEK, seek, 1)
}};
#undef N

#define N segment
E_S("Segment", 8)
F(MATROSKA_ID_SEEKHEAD, seek_head, 1)
F(MATROSKA_ID_INFO, info, 1)
F(MATROSKA_ID_CLUSTER, cluster, 1)
F(MATROSKA_ID_TRACKS, tracks, 1)
F(MATROSKA_ID_CUES, cues, 0)
F(MATROSKA_ID_ATTACHMENTS, attachments, 0)
F(MATROSKA_ID_CHAPTERS, chapters, 0)
F(MATROSKA_ID_TAGS, tags, 1)
}};
#undef N

E("Void", void, EBML_TYPE_BINARY)

E("CRC32", crc32, EBML_TYPE_BINARY)

E("DocTypeReadVersion", doc_type_read_version, EBML_TYPE_UINT)

E("DocTypeVersion", doc_type_version, EBML_TYPE_UINT)

E("DocType", doc_type, EBML_TYPE_STR)

E("EBMLMaxSizeLength", ebml_max_size_length, EBML_TYPE_UINT)

E("EBMLMaxIDLength", ebml_max_id_length, EBML_TYPE_UINT)

E("EBMLReadVersion", ebml_read_version, EBML_TYPE_UINT)

E("EBMLVersion", ebml_version, EBML_TYPE_UINT)

#define N ebml
E_S("EBML", 7)
F(EBML_ID_EBMLVERSION, ebml_version, 0)
F(EBML_ID_EBMLREADVERSION, ebml_read_version, 0)
F(EBML_ID_EBMLMAXIDLENGTH, ebml_max_id_length, 0)
F(EBML_ID_EBMLMAXSIZELENGTH, ebml_max_size_length, 0)
F(EBML_ID_DOCTYPE, doc_type, 0)
F(EBML_ID_DOCTYPEVERSION, doc_type_version, 0)
F(EBML_ID_DOCTYPEREADVERSION, doc_type_read_version, 0)
}};
#undef N
