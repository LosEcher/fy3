//chenglouup
inherit ROOM;
void create()
{
  set ("short", "��¥����");
  set ("long", @LONG
һ���ϳ�¥�����������һ��Ƭ�Ŀ����ؾ����۵ף�Ҫ�������ﲼ�������Ҫ����
˭�빥��������ֱ�ȵ��컹�ѡ�
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([  
    "down" : __DIR__"chenglou",
 
]));
	set("objects",([
		"/npc/man6":2,
	]));
	 setup();
        replace_program(ROOM);
}
