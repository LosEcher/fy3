// Room: /u/yuki/workroom.c

inherit ROOM;

void create()
{
	set("short", "[1;35mè��[2;37;0m");
	set("long", @LONG
�����������Ĺ����ң����Ӳ��󣬵��ǲ��õĺ���ܰ������ɫ�Ĵ�����
����ɫ�ļҾߣ�����ɫ��ǽ�ڡ�ǽֽ����ǳ��ɫ��һֻHello Kitty��
������������˿��ֺ���ʳ������϶ѵĶ���������С˵������ɳ
������ģ�һ�����ݽ�ȥ��������ˡ����ӷŵ���Channel VƵ������
��������Ÿ�����ǳ��ɫ�ĵذ�ש�õ���ɫƴ�������֣�Once in a 
blue moon.����������ëë��Ь��Hello Kitty��˯�£����ڵ���ǰ��
ϸ˼���ţ�����ȴ��ͣ���ô���̣�ԭ������Ŭ���Ĺ����š�
LONG
	);
	set("exits", ([ /* sizeof() == 7 */
  "sleeping" : __DIR__"sleeproom",
  "wizroom" : "/d/wiz/wizroom",
  "down" : "/d/zhongzhou/shizhongxin",
   "heart" : "/u/heart/workroom.c",
  "mool" : "/u/mool/workroom",
  "meeting" : "/d/wiz/meeting.c",
  "ffdd" : "/u/ffdd/workroom",
]));
	set("valid_startroom", 1);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
