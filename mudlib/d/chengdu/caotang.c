//bye enter

inherit ROOM;

void create()
{
        set("short", "�Ÿ�����");
	set("long", @LONG
������������ĶŸ������ˡ������ڣ�С�ţ���ˮ��÷
԰����ͥ�У����д�֮÷����֮�ɣ���֮�գ���֮�����ͣ���
�����У������з���֮��˼���������Ȼ֮������
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
            "southwest" : __DIR__"xiaoxiang1",
            "east" : __DIR__"cdta",
            ]));

        set("no_clean_up", 0);
        set("no_fight", 1);
        set("objects",([
            __DIR__"npc/dufu" : 1,
            __DIR__"npc/xuetong" : 2,
        ]));

	setup();
	replace_program(ROOM);
}
