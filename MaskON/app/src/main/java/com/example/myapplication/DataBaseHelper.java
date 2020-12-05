package com.example.myapplication;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import androidx.annotation.Nullable;

public class DataBaseHelper extends SQLiteOpenHelper {
    public static final String DATABASE_NAME="Network.db";
    public static final String TABLE_NAME="network_mamory";
    public static final String COL_1="ID";
    public static final String COL_2="WIFI_NAME";
    public static final String COL_3="IP_ADRESS";
    public DataBaseHelper(@Nullable Context context) {
        super(context, DATABASE_NAME,null , 1);
        SQLiteDatabase db = this.getWritableDatabase();
    }

    @Override
    public void onCreate(@org.jetbrains.annotations.NotNull SQLiteDatabase db) {
        db.execSQL("create table " + TABLE_NAME + " (ID INTEGER PRIMARY KEY AUTOINCREMENT, WIFI_NAME TXT, IP_ADRESS TXT)");
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        db.execSQL("DROP TABLE IF EXISTS " + TABLE_NAME);
        onCreate(db);
    }
}
