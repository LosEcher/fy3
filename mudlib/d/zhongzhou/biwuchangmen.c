

inherit ROOM;

void create()
{
        set("short", "���䳡����");
        set("long", @LONG
վ��������Ľֵ������˲�������һ����������ߣ���ǽ
��Ժ��һ�������ţ���������[������]. �����Ǳ��䳡�ĵ���
�ڡ�����������ȥһ����ֶ������ж�ȥ��
LONG
        );
set("outdoors","/d/zhongzhou");

        set("exits", ([
                 "south" : __DIR__"yanlingdong.c",
                 "north" : __DIR__"biwuchangyuan.c",
]));


        setup();
        replace_program(ROOM);
}


