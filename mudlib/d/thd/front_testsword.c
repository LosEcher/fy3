// thd:front_testsword.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "�Խ�ͤǰ");
	set("long", @LONG
�����Խ�ͤǰ��һƬ�յء����Զ����һ����ɱ��̵����ӣ���������
ľ���ǻƵ�����ϲ������ľ������µ���һ��ƬӲ��أ��ܸɾ���ƽ����
ֻ���м��������ɼ��Ľ�ӡ����Χ����ľ����Щ���ۣ�����������ǻ�ҩ
ʦ����֮����һ��С���������ţ�һ����ɫ�����ͤ�Ӿ�����ǰ�ˡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "east" : __DIR__"testsword",
          "west" : __DIR__"eroad",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

