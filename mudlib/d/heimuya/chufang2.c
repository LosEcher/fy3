//chufang1.c
inherit ROOM;
void create()
{
  set("short","����");
  set("long", @LONG
����С������רΪ���½��еĸ߲���񣬲������Ⱥ��󲻴�ḻ����˵
ʥ����˶���������ɽ����������ʰ��ʮ�ָɾ���������ư�趼������������
�����Ǹ�СС�ĳ�����
LONG  );
  set("exits",([
      "west" : __DIR__"chitang",
  ]));
  set("objects",([
      __DIR__"npc/shinu" : 1,
      __DIR__"obj/tea" : random(6),
      __DIR__"obj/sherou"  : random(4),
  ]));
//  set("no_clean_up", 0);
  setup();
}
int valid_leave(object me, string dir)
{
	if (( present("tea", me)||present("she rou", me))
	&&objectp(present("shi nu", environment(me))) )
	return notify_fail
	("��Ů��Ŀһ��:����[�Բ��궵���߰�],��������¡�\n");
	return ::valid_leave(me, dir);
}

