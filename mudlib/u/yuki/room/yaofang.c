// Room: /u/yuki/room/yaofang.c

inherit ROOM;

void create()
{
        set("short", "ҩ��");
        set("long", @LONG
������÷ׯר��Ϊ����׼����ҩ����һ����һ��Ũ�ҵ�ҩ���˱�
���������������Ĵ��ڵĵ���������ӣ������Ϸ�����������ɹ�ĸ�
�ֲ�ҩ�����Ų�Զ�����Ÿ����Ĺ��ӣ����ٸ�С��������ֱ����
��ҩ�Ȳ�ҩ��һ��Сʦ������æµ�ķ�����ɹ�õĲ�ҩ��
LONG
        );
        set("shout", "ҩ��");
        set("exits", ([ /* sizeof() == 1 */
  "south" : "/d/meizhuang/shibanlu3",
]));
        set("objects", ([
                "/u/yuki/npc/yaofangdizi" : 1,
        ]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}
