// Room: /chengdu/cddtp.c
// oooc: 1998/06/24 

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����һ�Ҽ�ª�Ĵ����̣����İ���һ����¯��¯���������
��һƬͨ�죬��һ�߽�ȥ�͸е�������ȡ�ǽ�Ƕ��������깤��
δ�깤�Ĳ˵���������������ذ�ס����׵��һλ������ͷ��
��������������ר����־���ڴ�����
LONG
	);

	set("exits", ([
                "west" : __DIR__"chunxilu2",
	]));
        set("objects", ([
                 __DIR__"npc/smith": 1,]));

	setup();
	replace_program(ROOM);
}

