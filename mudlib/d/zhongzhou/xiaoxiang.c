//xiaoxiang
  

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
һ��С�ﲻ֪ͨ���δ������߸�ǽԺ�䣬���Ե�С��Ļ谵��˭Ҳ��
�������ֵط��������ֻ����ǰ���ߣ�����ǰ�浽��ͨ����� 
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"wendingbei1",
		"west" : __DIR__"xiaoxiang1",
		
	]));
	set("objects",([
		__DIR__"npc/dipi":1,
	]));

	setup();
	replace_program(ROOM);
}

