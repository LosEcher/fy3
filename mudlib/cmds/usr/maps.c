inherit F_CLEAN_UP;

int main(object me, string arg)
{
//	int i;
	string file,where;
	object env;
env=environment(me);
where=env->query("outdoors");
if (!where)
   return notify_fail("��һָ��ֻ��������ʹ��.\n");
if(sscanf(where, "/d/%s",file)==1)   {
	file="map_"+file;
	if (file_size("/doc/map/"+file)>0)  { 
			me->start_more( read_file("/doc/map/"+file) );
			return 1;
	}
  }
 file="map_"+where;
 if (file_size("/doc/map/"+file)>0)   {
 me->start_more(read_file("/doc/map/"+file));
 return 1;
 }
return notify_fail("û���ҵ���ݵ�ͼ��\n");
}
int help()
{
    write(@HELP
ָ���ʽ��maps
��ʾ��ǰ������ͼ.
HELP );
    return 1;
}
