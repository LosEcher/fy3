//ROOM: xiaohuayuan.c

inherit ROOM;

void create()
{
	set("short", "С��԰");
        set("long",
	     "�ӻ谵�ĵص��г���, �㷢���Լ�����������һ�������µ�С��\n"
	     "԰��, ��÷����, ���ɴ��, ���õ��ľ߽���, ����ȥ��һ�侫��\n"
              "С��.\n"
            );
        set("exits", ([
		"north" : __DIR__"didao6",
                "enter" :__DIR__"xiaoshe",   
           ]));
        setup();
        replace_program(ROOM);
}