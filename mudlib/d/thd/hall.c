// thd:hall.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "���´���");
	set("long", @LONG
�������һ��������´������Ƶ���������ͽ���������Ӵ�������ش�
������ڴ˴����С�����Ĵ����͹���ׯ�Ĵ�����Ȼ��ͬ������Ĵ���һ
��Ҳû�и���֮�������͵��ϱ������һ�����������Ӵ�ɵģ������е�
����Ҳ���������ġ��������������ŷ������߽���������ͼ��һ�ж�����
ô����Ȼ������һ��������������һ�ж���ʾ����ҩʦ��ʿ����������
��������Ϊ��ѧ��ʦ�ĺ�����ơ������Ķ����ǻƵ������鷿�������ǻ�
԰��
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/huang_yaoshi" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
	    "northeast" : __DIR__"yard1",
	    "northwest" : __DIR__"bookroom",
	    "south" : __DIR__"in_road4",
	]));
      
      set("valid_startroom", 1);
	setup();
//	replace_program(ROOM);
	"/u/aug/thd/thd_b"->foo();
//	load_object("/daemon/board/thd_b");
}

