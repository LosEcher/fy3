// thd:workroom.c
// 97.7.21 by Aug

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
������ӭ��Ĺ����ң���ӭ�����Ǹ������������ʦ�����Ĺ�����
�������ִ����ġ���������һ̨��30����ʾ��P8����һֻ2Mbps �Ĵ�è��
�����ӵ�������һ30���׸ߵķ���ܣ���֪�Ǹ�ʲô�õġ�
LONG
);


//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
	    "thd" : "/u/aug/thd/hall",
     "sz" : "/u/aug/shenzhen/shenzhen",

	    "lu" : "/d/lu/hall",
	    "wiz" : "/d/wiz/meeting",
	]));
      
	setup();
	replace_program(ROOM);
}

