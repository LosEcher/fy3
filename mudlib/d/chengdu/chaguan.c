// bye enter 

inherit ROOM;

void create()
{
        set("short", "½����");
        set("long", @LONG
�����ǳɶ��������Ĳ�¥,�ɶ��Ĵ���Թ�ǳ�ϲ������
һ���ط�����Ϊ���ﻷ������,���������Ķ��������������
����,�����������һ��Ʒ��,һ��ͬ����֮ʿ��̸����.һ¥
��һ����Ǯ�˺Ȳ�ĵط�,��¥������Щ������������Ļ���
��ʿ����ĵط���
LONG
        );
        set("resource/water", 1);

        set("exits", ([
                "east" : __DIR__"chunxilu1",
                "up" : __DIR__"chaguan2",
        ]));

        set("objects", ([
__DIR__"npc/boss1":1,
        ]));

        setup();
        replace_program(ROOM);
}


